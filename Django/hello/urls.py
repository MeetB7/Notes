from django.urls import path
from . import views
urlpatterns = [
    path("", views.index, name='index'),
    path("meet", views.meet , name='meet'),
    path('<str:name>', views.greet, name='greet'),
    # this takes whatever string after hello/ and assigns the "name" variable to it.
]