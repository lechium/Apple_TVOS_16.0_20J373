//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallStateController;

@interface CSDVoIPApplicationController : NSObject
{
    CSDCallStateController *_callStateController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000143aaa
@property(nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
- (void)handleApplicationUninstalledNotification:(id)arg1;	// IMP=0x0010000000143a7d
- (void)noteReportedNewIncomingVoIPCallForBundleIdentifier:(id)arg1;	// IMP=0x0010000000143a77
- (id)init;	// IMP=0x0010000000143a48

@end

