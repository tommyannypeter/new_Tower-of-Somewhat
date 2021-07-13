#include "Color.hh"

ColorTranslator::ColorTranslator() {
    m_name_enum_map = {};
    registerColorName(ColorName::ColorName_original_color, ColorCode::ColorCode_foreground_lightgrey_background_black);
}

ColorTranslator::~ColorTranslator() {
}

ColorTranslator* ColorTranslator::m_instance = NULL;

void ColorTranslator::registerColorName(ColorName color_name, ColorCode color_enum) {
    m_name_enum_map.insert(std::pair<ColorName, ColorCode>(color_name, color_enum));
}

ColorCode ColorTranslator::toColorCode(ColorName color_name) {
    return m_name_enum_map[color_name];
}
