SRC += pmjpmj.c

ifeq ($(strip $(SECRETS_ENABLED)), yes)
    SRC += features/secrets.c
    OPT_DEFS += -DSECRETS_ENABLED
endif

ifeq ($(strip $(MACROS_ENABLED)), yes)
    OPT_DEFS += -DMACROS_ENABLED
endif
