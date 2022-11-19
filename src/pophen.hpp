#ifndef POPHEN_H
#define POPHEN_H

#include <Godot.hpp>

#include <Input.hpp>
#include <Reference.hpp>
#include <Sprite.hpp>

class Pophen : public godot::Reference {
	GODOT_CLASS(Pophen, godot::Reference)

	godot::String data;

public:
	static void _register_methods();

	void _init();

	godot::String get_data() const;
};

class HenSprite : public godot::Sprite {
	GODOT_CLASS(HenSprite, godot::Sprite)

	godot::Input *_input;

public:
	static void _register_methods();

	void _init();

	void _process(const double p_delta);
};

#endif // POPHEN_H
