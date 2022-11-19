#include "pophen.hpp"

void Pophen::_register_methods() {
	godot::register_method("get_data", &Pophen::get_data);
}

void Pophen::_init() {
	data = "Happy Pop Hen, Move with Arrow Keys.";
}

godot::String Pophen::get_data() const {
	return data;
}

void HenSprite::_register_methods() {
	godot::register_method("_process", &HenSprite::_process);
}

// `_init` doesn't need to be registered in `_register_methods`.
// `_init` is always required, if you exclude it then Godot will crash.
void HenSprite::_init() {
	godot::Godot::print("Initiate the Hen Sprite......");
	_input = godot::Input::get_singleton();
}

void HenSprite::_process(const double p_delta) {
	godot::Vector2 input_dir(0, 0);

	input_dir.x = _input->get_action_strength("ui_right") - _input->get_action_strength("ui_left");
	input_dir.y = _input->get_action_strength("ui_down") - _input->get_action_strength("ui_up");

	set_position(get_position() + input_dir.normalized() * (real_t)p_delta * 300);
}
