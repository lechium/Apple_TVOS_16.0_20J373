//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (QueryParameters)
+ (id)screenSharingAppURL;	// IMP=0x001000000001401f
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x0010000000012c08
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x0010000000012a7c
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x00100000000129b6
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x00100000000127b9
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x0010000000012710
+ (id)faceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000012667
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x00100000000125be
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x0010000000012515
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;	// IMP=0x001000000001246c
+ (id)faceTimeShowHandoffEligibleNearbyURL;	// IMP=0x00100000000123c3
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x001000000001231a
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x0010000000012271
+ (id)faceTimeShowInCallUIURL;	// IMP=0x00100000000121c8
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x001000000001211f
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x0010000000012076
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x0010000000011fb4
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x0010000000011f91
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x0010000000011e4f
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x0010000000011d06
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x0010000000011cf2
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x0010000000011b45
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000011b2c
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0010000000011b10
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x0010000000011aef
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00100000000118ad
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000011833
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x00100000000141a1
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000014183
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x001000000006f2a4
+ (id)telephonyURLForVoicemail;	// IMP=0x001000000006f223
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x001000000006f0a2
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x001000000006efe0
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x001000000006eeb0
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x001000000006ee9c
+ (id)tu_defaultAllowedSchemes;	// IMP=0x0010000000092b21
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x001000000000c016
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000bec5
- (id)tuQueryParameters;	// IMP=0x001000000000ba39
- (id)queryParameters;	// IMP=0x001000000000ba27
- (id)answerRequestSourceIdentifier;	// IMP=0x0010000000013fc8
- (_Bool)isAnswerRequestURL;	// IMP=0x0010000000013f5e
- (_Bool)isFaceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000013ee2
- (long long)foregroundAppApplicationType;	// IMP=0x0010000000013e6d
- (id)foregroundAppBundleIdentifier;	// IMP=0x0010000000013e16
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x0010000000013d9a
- (_Bool)isShowScreenSharingURL;	// IMP=0x0010000000013d4f
- (_Bool)isShowHandoffEligibleNearbyURL;	// IMP=0x0010000000013cd3
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x0010000000013c57
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x0010000000013bdb
- (_Bool)isShowIncomingTransmissionNoticeURL;	// IMP=0x0010000000013b5f
- (_Bool)isShowInCallUIURL;	// IMP=0x0010000000013a9b
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x0010000000013a1f
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x00100000000139a3
- (_Bool)isDialCallURL;	// IMP=0x001000000001396c
- (_Bool)hasNoPromptOption;	// IMP=0x00100000000138e4
- (id)conversationLinkURLForJoinConversation;	// IMP=0x0010000000013637
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x00100000000135bb
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x001000000001330e
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x00100000000132c3
- (id)pseudonymForLinkDetailsView;	// IMP=0x001000000001304b
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x0010000000012fcf
- (_Bool)isSystemCallControlsURL;	// IMP=0x0010000000012f84
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x0010000000012f39
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x0010000000012eee
- (_Bool)isFaceTimeAudioURL;	// IMP=0x0010000000012e82
- (_Bool)isFaceTimePromptURL;	// IMP=0x0010000000012e37
- (_Bool)isFaceTimeURL;	// IMP=0x0010000000012dcb
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x00100000000117cb
- (id)faceTimeDestinationAccount;	// IMP=0x0010000000011696
- (id)_mobilePhoneQueryParameters;	// IMP=0x0010000000070325
- (id)_mobilePhonePathParameters;	// IMP=0x001000000007002a
- (id)telephonyParameterDictionary;	// IMP=0x001000000006ff60
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x001000000006fbcb
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x001000000006fa70
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x001000000006f873
- (_Bool)hasTelephonyScheme;	// IMP=0x001000000006f833
- (_Bool)isTelephonyPromptURL;	// IMP=0x001000000006f81a
- (_Bool)isTelephonyURL;	// IMP=0x001000000006f7c3
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x001000000006f6e3
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x001000000006f31e
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x0010000000092c60
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000092bf5
- (id)sanitizedCopy;	// IMP=0x0010000000092b8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

