//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData;
@protocol CSDIDSChat;

@protocol CSDIDSChatDelegate <NSObject>
- (struct CGSize)localPortraitAspectRatioForChat:(id <CSDIDSChat>)arg1;
- (_Bool)isMediaAllowedForChat:(id <CSDIDSChat>)arg1;
- (_Bool)isCellularDataPreferredForChat:(id <CSDIDSChat>)arg1;
- (_Bool)isCellularDataAllowedForChat:(id <CSDIDSChat>)arg1;
- (_Bool)isWiFiAllowedForChat:(id <CSDIDSChat>)arg1;

@optional
- (_Bool)isMomentsAvailableForChat:(id <CSDIDSChat>)arg1;
- (void)chat:(id <CSDIDSChat>)arg1 receivedData:(NSData *)arg2;
- (void)chat:(id <CSDIDSChat>)arg1 changedBytesOfDataUsed:(long long)arg2;
- (void)chat:(id <CSDIDSChat>)arg1 outputLevelChangedTo:(float)arg2;
- (void)chat:(id <CSDIDSChat>)arg1 inputLevelChangedTo:(float)arg2;
- (void)chat:(id <CSDIDSChat>)arg1 outputFrequencyLevelChangedTo:(NSData *)arg2;
- (void)chat:(id <CSDIDSChat>)arg1 inputFrequencyLevelChangedTo:(NSData *)arg2;
- (void)chatEnded:(id <CSDIDSChat>)arg1;
- (void)chatConnected:(id <CSDIDSChat>)arg1;
- (void)chatStartedConnecting:(id <CSDIDSChat>)arg1;
- (void)chatSentInvitation:(id <CSDIDSChat>)arg1;
@end

