from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def index(request):
    return render(request, 'hello/index.html')

def meet(request):
    return HttpResponse('Hello! Meet')

def greet(request, name):
#    return HttpResponse(f'Hello! {name.capitalize()}')
    return render(request, "hello/greet.html", {
        "name" : name.capitalize()
    })
    # the 3rd argument in {} is a py dictionary which is called 'context' it provides info to template
