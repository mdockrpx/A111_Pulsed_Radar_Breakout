BUILD_ALL += $(OUT_DIR)/sparkx_envelope_iq_example

$(OUT_DIR)/sparkx_envelope_iq_example : \
					$(OUT_OBJ_DIR)/example_service_iq.o \
					libacconeer.a \
					libacconeer_a111_r2c.a \
					libcustomer.a \
					libacc_service.a \
					$(OUT_OBJ_DIR)/acc_board_rpi_sparkx.o
	@echo "    Linking $(notdir $@)"
	$(SUPPRESS)mkdir -p $(OUT_DIR)
	$(SUPPRESS)$(LINK.o) -Wl,--start-group $^ -Wl,--end-group $(LOADLIBES) $(LDLIBS) -o $@
