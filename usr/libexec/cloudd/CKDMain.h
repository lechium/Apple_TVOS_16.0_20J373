//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _TtC6cloudd13CKDMain_Swift;

@interface CKDMain : NSObject
{
    _Bool _upAndRunning;	// 8 = 0x8
    _TtC6cloudd13CKDMain_Swift *_swiftMain;	// 16 = 0x10
}

+ (id)sharedMain;	// IMP=0x0020000000001e1b
- (void).cxx_destruct;	// IMP=0x0020000000002eb2
@property(nonatomic) _Bool upAndRunning; // @synthesize upAndRunning=_upAndRunning;
@property(retain, nonatomic) _TtC6cloudd13CKDMain_Swift *swiftMain; // @synthesize swiftMain=_swiftMain;
- (void)willSwitchUser;	// IMP=0x0010000000002e7f
- (void)uploadContent;	// IMP=0x0010000000002dbe
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x0010000000002839
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;	// IMP=0x001000000000282b
- (void)_setupTCCEventHandler;	// IMP=0x00100000000024b5
- (void)_setupDistnotedEventHandler;	// IMP=0x001000000000231c
- (void)_setupNotifydEventHandler;	// IMP=0x0010000000001fb0
- (id)init;	// IMP=0x0010000000001e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

