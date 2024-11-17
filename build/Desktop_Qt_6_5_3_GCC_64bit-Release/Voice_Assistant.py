import datetime
from bs4 import BeautifulSoup
import requests
import pywhatkit
import wikipedia
import pyjokes
from googletrans import Translator, constants
from gtts import gTTS
import os
import playsound
import speech_recognition as sr


LANG="ar"
wikipedia.set_lang(LANG) 
header={ 
    "User-Agent": "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:128.0) Gecko/20100101 Firefox/128.0"
  }

#here we play the speach from the user 
def Alexa_Speak(text,language=LANG):
    print(f"ام احمد: {text}")
    tts=gTTS(text=text,lang=language)
    tts.save("Speech.mp3")
    playsound.playsound("Speech.mp3",True)
    os.remove("Speech.mp3")


#here make alexa listen to user
def Alexa_Listen():
    """
    Listens for speech input, recognizes the command, and returns the recognized text.
    
    Returns:
        str: The recognized speech command, or an empty string if an error occurs.
    """
    recognizer = sr.Recognizer()
    
    try:
        with sr.Microphone() as source:
            #print("KeyWords You can use : [ ما هو , ما هي , ابحثي عن , كلميني عن , من هو , شغلي , افتحي ]")
            print("Listening...")
            audio = recognizer.listen(source)
            
        print("Recognizing...")
        command = recognizer.recognize_google(audio, language=LANG)
        print(f"انا: {command}")
        return command
    
    except sr.UnknownValueError:
        Alexa_Speak("مش فهماك")  
        return ""
    
    except sr.RequestError as e:
        print(f"Error: {e}")
        return ""
    
    except Exception as e:
        print(f"An error occurred: {e}")
        return ""



def Run_Alexa():

    finish=True
    while finish:
        command=Alexa_Listen()
        if ("شكرا" in command) | ("باي" in command) | ("مع السلامه" in command) | ("سلام" in command):
            finish=False
        elif ("ازيك" in command) | ("عامله" in command):
            Alexa_Speak("بخير يا اخوياا")
        elif ("الساعه" in command) | ("الوقت" in command):
            Alexa_Speak(".الساعة الان."+get_time())
        elif "تاريخ" in command:
            Alexa_Speak(".تاريخ اليوم هو."+get_date())
        elif ("ما هو" in command) | ("ما هي" in command)| ("عندي سؤال" in command) | ("ابحثي عن" in command):
            Alexa_Speak(google_it(command))
        elif ("من هو" in command) | ("من هي" in command)| ("كلميني عن" in command):
           Alexa_Speak(ask_about(command))
        elif ("اغنيه" in command) | ("موسيقى"  in command) | ("سوره" in command) | ("صوره" in command) | ("فيديو" in command) | ("على يوتيوب" in command) | ("افتحي" in command) | ("شغلي" in command):
            Alexa_Speak(on_YouTube(command)) 
            
       
    Alexa_Speak("مع السلامة")


def get_time():
    return datetime.datetime.now().strftime("%H:%M:%S")

def get_date():
    return datetime.datetime.now().strftime("%A %d/%m/%Y")


def google_it(command):
    command=command.replace("ام احمد"," ")
    command=command.replace("اليكسا"," ")
    command=command.replace("ابحثي عن"," ")
    command=command.replace("عندي سؤال", " ")
    command=command.strip()
    #print(command)
    url="https://www.google.com/search?q="+command
    it=requests.get(url,headers=header)

    soup=BeautifulSoup(it.content,'lxml')
     
    response=soup.find('div',class_="HwtpBd gsrt PZPZlf kTOYnf")
    if response:
        return response.text
    else:
        return ("مش فهماك")

def ask_about(command):
    command = command.replace("كلميني عن", "")
    command = command.replace("من هو", "")  
    command = command.replace("من هي", "")       
    command = command.replace("اليكسا", "")  
    command=command.replace("ام احمد"," ")
    command=command.strip()  
    #print(command)
    response = wikipedia.summary(command,1)
    if response:
        return response
    else:
        return ("مش فهماك")


def on_YouTube(command):
    command=command.replace("ام احمد"," ")
    command = command.replace("اليكسا", "") 
    command = command.replace("اغنيه", "")
    command = command.replace("موسيقى", "")  
    command = command.replace("سوره", "")       
    command = command.replace("صوره" , "")  
    command = command.replace("فيديو" , "")       
    command = command.replace("على يوتيوب" , "") 
    command = command.replace("افتحي" , "")       
    command = command.replace("شغلي" , "") 
    command=command.strip()  
    response="حاضر ها هي" + command       
    pywhatkit.playonyt(command)
    return response


Run_Alexa()
