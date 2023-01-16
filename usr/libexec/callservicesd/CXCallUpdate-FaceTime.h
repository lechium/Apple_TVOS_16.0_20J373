//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXCallUpdate.h>

@class NSNumber, NSString;

@interface CXCallUpdate (FaceTime)
- (void)updatePropertiesForVideo:(_Bool)arg1;	// IMP=0x0010000000019e31
@property(copy, nonatomic) NSNumber *handoffRecipientParticipant;
@property(copy, nonatomic) NSString *localizedHandoffRecipientDeviceCategory;
- (void)setRemoteMomentsAvailable:(_Bool)arg1;	// IMP=0x0010000000019a4e
@property(readonly, nonatomic, getter=isRemoteMomentsAvailable) _Bool remoteMomentsAvailable;
@property(nonatomic) long long faceTimeTransportType;
- (id)initWithTUConversation:(id)arg1;	// IMP=0x0010000000018ead
- (id)initWithIMAVChat:(id)arg1;	// IMP=0x0010000000018ca8
- (id)initWithFaceTimeIDSChat:(id)arg1;	// IMP=0x0010000000018c0a
- (void)setOutputAudioPowerSpectrumToken:(long long)arg1;	// IMP=0x00100000000a8268
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
- (void)setInputAudioPowerSpectrumToken:(long long)arg1;	// IMP=0x00100000000a80f4
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
- (void)setInitialLinkType:(unsigned long long)arg1;	// IMP=0x00100000000a7f80
@property(readonly, nonatomic) unsigned long long initialLinkType;
- (void)setRemoteIDSDestination:(id)arg1;	// IMP=0x00100000000a7e1e
- (id)remoteIDSDestination;	// IMP=0x00100000000a7dc4
@property(readonly, copy, nonatomic) CXCallUpdate *sanitizedCallUpdate;
- (id)initWithJoinConversationRequest:(id)arg1;	// IMP=0x00100000000a7829
- (id)initWithDialRequest:(id)arg1;	// IMP=0x00100000000a76a1
- (id)initWithStartCallAction:(id)arg1;	// IMP=0x00100000000a758c
- (id)initWithIDSChat:(id)arg1;	// IMP=0x00100000000a722a
@end
