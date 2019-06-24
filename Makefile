.PHONY: clean All

All:
	@echo "----------Building project:[ VTK_demo - Debug ]----------"
	@cd "VTK_demo" && "$(MAKE)" -f  "VTK_demo.mk"
clean:
	@echo "----------Cleaning project:[ VTK_demo - Debug ]----------"
	@cd "VTK_demo" && "$(MAKE)" -f  "VTK_demo.mk" clean
