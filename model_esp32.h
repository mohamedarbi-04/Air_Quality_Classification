
#ifndef AIR_QUALITY_MODEL_H
#define AIR_QUALITY_MODEL_H

/* Call this function from your loop():
   int modeEnc = (mode == "CLASS") ? 0 : (mode == "AMPHI") ? 1 : 2;
   float heatIndex = temp * (1.0f + 0.01f * hum);
   float gasRatio  = (float)mq2 / (mq135 + 1.0f);
   String label = predictAirQuality(modeEnc, temp, hum, mq2, mq135,
                                    heatIndex, gasRatio);
*/

inline String predictAirQuality(
    int   mode_enc,
    float temp,
    float humidity,
    int   mq2,
    int   mq135,
    float heat_index,
    float gas_ratio)
{
    if (mq2 <= 2999) {
        if (mq135 <= 2999) {
            if (heat_index <= 39.3015f) {
                if (heat_index <= 38.2774f) {
                    if (heat_index <= 37.1121f) {
                        if (temp <= 22.7500f) {
                            return "GOOD";
                        } else {
                            if (mq2 <= 821) {
                                return "GOOD";
                            } else {
                                return "GOOD";
                            }
                        }
                    } else {
                        if (heat_index <= 37.3378f) {
                            return "MEDIUM";
                        } else {
                            return "GOOD";
                        }
                    }
                } else {
                    if (mode_enc <= 1) {
                        return "GOOD";
                    } else {
                        return "MEDIUM";
                    }
                }
            } else {
                if (heat_index <= 49.2053f) {
                    if (mq2 <= 650) {
                        return "GOOD";
                    } else {
                        if (gas_ratio <= 1.3321f) {
                            if (mq2 <= 1935) {
                                if (heat_index <= 42.3558f) {
                                    return "MEDIUM";
                                } else {
                                    return "MEDIUM";
                                }
                            } else {
                                return "MEDIUM";
                            }
                        } else {
                            return "GOOD";
                        }
                    }
                } else {
                    if (mq2 <= 1829) {
                        if (mode_enc <= 1) {
                            if (mq2 <= 1704) {
                                if (temp <= 27.5500f) {
                                    return "MEDIUM";
                                } else {
                                    return "MEDIUM";
                                }
                            } else {
                                return "MEDIUM";
                            }
                        } else {
                            if (mq135 <= 1275) {
                                return "POOR";
                            } else {
                                if (gas_ratio <= 0.6373f) {
                                    return "POOR";
                                } else {
                                    return "POOR";
                                }
                            }
                        }
                    } else {
                        if (humidity <= 75.3000f) {
                            return "POOR";
                        } else {
                            if (mq2 <= 1964) {
                                if (humidity <= 79.0500f) {
                                    return "POOR";
                                } else {
                                    return "POOR";
                                }
                            } else {
                                if (temp <= 27.4500f) {
                                    return "POOR";
                                } else {
                                    return "POOR";
                                }
                            }
                        }
                    }
                }
            }
        } else {
            return "DANGER_POLLUTION";
        }
    } else {
        if (mq2 <= 3047) {
            return "DANGER_GAS";
        } else {
            return "DANGER_GAS";
        }
    }
}

#endif // AIR_QUALITY_MODEL_H