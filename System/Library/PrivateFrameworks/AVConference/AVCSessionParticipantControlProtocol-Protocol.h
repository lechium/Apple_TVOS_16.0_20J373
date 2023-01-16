//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSString;

@protocol AVCSessionParticipantControlProtocol <NSObject>
@property(readonly, nonatomic) NSData *frequencyLevels;
@property(nonatomic) float volume;
@property(nonatomic, getter=isOneToOneEnabled) _Bool oneToOneEnabled;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property(nonatomic, getter=isScreenEnabled) _Bool screenEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted;
@property(readonly, nonatomic) NSData *negotiationData;
@property(readonly, nonatomic) NSString *uuid;
- (unsigned int)mediaStateForMediaType:(unsigned int)arg1;
- (void)setMediaState:(unsigned int)arg1 forMediaType:(unsigned int)arg2;
@end
