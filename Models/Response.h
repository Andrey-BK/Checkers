#pragma once

enum class Response
{
    OK, 
    BACK, // "нажатие кнопки "назад"
    REPLAY, // нажатие кнопки "заново"
    QUIT, // нажатие кнопки "выход"
    CELL // нажатие на одну из клеток
};
