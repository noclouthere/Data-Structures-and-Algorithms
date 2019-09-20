cmake_minimum_required(VERSION 3.14)
project(CardGames)

set(CMAKE_CXX_STANDARD 17)

add_executable(CardGames main.cpp Card.cpp Card.h Deck.cpp Deck.h)