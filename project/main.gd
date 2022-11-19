extends Node

const Pophen = preload("res://gdnative/pophen.gdns")

onready var simple_instance = Pophen.new()


func _on_Button_pressed():
	$Label.text = "C++ code says: " + simple_instance.get_data()
