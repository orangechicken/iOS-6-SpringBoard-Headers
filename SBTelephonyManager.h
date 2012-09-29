/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RadiosPreferencesDelegate-Protocol.h"

@class NSString, NSTimer, RadiosPreferences, SBAlertItem;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate>
{
    NSString *_cachedCTRegistrationStatus;
    BOOL _emergencyCallsOnly;
    int _registrationStatus;
    void *_suspendDormancyAssertion;
    BOOL _signalStrengthHasBeenSet;
    long _signalStrength;
    long _signalStrengthBars;
    NSString *_operatorName;
    NSString *_lastKnownNetworkCountryCode;
    unsigned int _suspendDormancyEnabled;
    unsigned int _usingWifi:1;
    unsigned int _usingVPN:1;
    unsigned int _iTunesNeedsToRecheckActivation:1;
    unsigned int _pretendingToSearch:1;
    unsigned int _callForwardingIndicator:2;
    BOOL _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    unsigned int _loggingCallAudio:1;
    NSString *_inCallStatusPreamble;
    NSTimer *_inCallTimer;
    RadiosPreferences *_radioPrefs;
    int _needsUserIdentificationModule;
    NSString *_simStatus;
    int _wantsToHideDataIndicators;
    int _modemDataConnectionType;
    BOOL _modemDataConnectionTypeIsKnown;
}

+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1;
+ (id)sharedTelephonyManager;
- (void)_wokeFromSleep:(id)arg1;
- (void)noteWirelessModemChanged;
- (void)setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2;
- (int)numberOfNetworkTetheredDevices;
- (BOOL)isNetworkTethering;
- (void)noteSIMUnlockAttempt;
- (int)registrationCauseCode;
- (BOOL)needsUserIdentificationModule;
- (id)SIMStatus;
- (void)_setSIMStatus:(id)arg1;
- (BOOL)canOnlyMakeEmergencyCalls;
- (int)registrationStatus;
- (id)operatorName;
- (void)operatorBundleChanged;
- (void)setOperatorName:(id)arg1;
- (void)_reallySetOperatorName:(id)arg1;
- (void)_fetchOperatorNameWithCompletion:(id)arg1;
- (long)signalStrengthBars;
- (long)signalStrength;
- (void)_setSignalStrength:(long)arg1 andBars:(long)arg2;
- (void)carrierBundleChanged;
- (void)_prepareToAnswerCall;
- (BOOL)_pretendingToSearch;
- (void)_stopFakeService;
- (void)_startFakeServiceIfNecessary;
- (void)_cancelFakeService;
- (void)_updateRegistrationNow;
- (void)_setRegistrationStatus:(int)arg1;
- (void)_updateCanOnlyMakeEmergencyCalls;
- (void)_setCachedCTRegistrationStatus:(struct __CFString *)arg1;
- (struct __CFString *)_cachedCTRegistrationStatus;
- (void)postponementStatusChanged;
- (void)_proximityChanged:(id)arg1;
- (void)_headphoneChanged:(id)arg1;
- (void)_resetCTMMode;
- (id)ttyTitle;
- (BOOL)shouldPromptForTTY;
- (void)configureForTTY:(BOOL)arg1;
- (void)exitEmergencyCallbackMode;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;
- (BOOL)isInEmergencyCallbackMode;
- (BOOL)isEmergencyCallActive;
- (void)_provisioningUpdateWithStatus:(int)arg1;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (id)copyTelephonyCapabilities;
- (id)copyMobileEquipmentInfo;
- (BOOL)isUsingVPNConnection;
- (void)setIsUsingVPNConnection:(BOOL)arg1;
- (void)setIsUsingWiFiConnection:(BOOL)arg1;
- (BOOL)isTTYEnabled;
- (BOOL)isUsingSlowDataConnection;
- (BOOL)isInAirplaneMode;
- (void)setIsInAirplaneMode:(BOOL)arg1;
- (BOOL)EDGEIsOn;
- (BOOL)cellularRadioCapabilityIsActive;
- (void)_setWantsToHideDataIndicators:(int)arg1;
- (void)_postDataConnectionTypeChanged;
- (int)dataConnectionType;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1;
- (void)_resetModemConnectionType;
- (void)setNetworkRegistrationEnabled:(BOOL)arg1;
- (BOOL)isNetworkRegistrationEnabled;
- (BOOL)MALoggingEnabled;
- (void)dumpBasebandState:(id)arg1;
- (void)_setIsLoggingCallAudio:(BOOL)arg1;
- (BOOL)isLoggingCallAudio;
- (void)setIncomingVoiceCallsEnabled:(BOOL)arg1;
- (void)unmute;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectCall;
- (void)disconnectAllCalls;
- (void)swapCalls;
- (BOOL)isCallAmbiguous;
- (void)disconnectIncomingCall;
- (BOOL)inCall;
- (BOOL)shouldHangUpOnLock;
- (BOOL)callWouldUseReceiver:(BOOL)arg1;
- (BOOL)inCallUsingReceiverForcingRoutingToReceiver:(BOOL)arg1;
- (BOOL)inCallUsingSpeakerOrReceiver;
- (BOOL)multipleCallsExist;
- (BOOL)outgoingCallExists;
- (BOOL)incomingCallExists;
- (BOOL)heldCallExists;
- (BOOL)activeCallExists;
- (int)callCount;
- (id)allMissedCallsAfterRowID:(long long)arg1;
- (long long)getRowIDOfLastCallInsert;
- (void)_delayedAudioResume;
- (void)updateDisplaySettings:(id)arg1 forOutgoingCallURL:(id)arg2 outURL:(id *)arg3;
- (id)urlWithScheme:(id)arg1 fromDialingNumber:(id)arg2 abUID:(int)arg3 urlPathAddition:(id)arg4 forceAssist:(BOOL)arg5 suppressAssist:(BOOL)arg6 wasAlreadyAssisted:(BOOL)arg7;
- (id)lastKnownNetworkCountryCode;
- (void)_updateLastKnownNetworkCountryCode;
- (void)updateNetworkLocale;
- (BOOL)updateLocale;
- (void)_updateState;
- (void)updateCalls;
- (void)airplaneModeChanged;
- (void)updateAirplaneMode;
- (void)setFastDormancySuspended:(BOOL)arg1;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)arg1;
- (void)updateStatusBarCallDuration;
- (void)_phoneActivationStateChanged:(id)arg1;
- (void)updateStatusBarCallState:(BOOL)arg1;
- (id)_phoneApp;
- (void)updateSpringBoard;
- (int)callForwardingIndicator;
- (void)updateCallForwardingIndicator;
- (void)setCallForwardingIndicator:(int)arg1;
- (double)inCallDuration;
- (void)updateTTYIndicator;
- (void)SBTelephonyDaemonRestartHandler;
- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (void)_avSystemControllerDidError:(id)arg1;
- (struct __CTServerConnection *)_serverConnection;
- (void)_performQueryInBackground:(id)arg1 withMainQueueResultHandler:(void)arg2;
- (void)_postStartupNotification;
- (id)init;

@end

