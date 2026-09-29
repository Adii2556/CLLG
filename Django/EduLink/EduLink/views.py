from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    #return HttpResponse("Welcome to EduLink!")
    return render(request, 'websites/index.html')

def about(request):
    #return HttpResponse("This is the about page of EduLink.")
    return render(request, 'websites/about.html')


def contact(request):
    #return HttpResponse("This is the contact page of EduLink.")
    return render(request, 'websites/contact.html')
