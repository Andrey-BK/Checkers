﻿#pragma once

enum class Response
{
    OK, // нажатие на кнопку после конца игры
    BACK, // "нажатие кнопки "назад"
    REPLAY, // нажатие кнопки "заново"
    QUIT, // нажатие кнопки "выход"
    CELL // нажатие на одну из клеток
};
