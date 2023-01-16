//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UAActivityReplay;
@protocol SFActivityScannerDelegate;

@interface UAMockActivityScanner : NSObject
{
    id <SFActivityScannerDelegate> _delegate;	// 8 = 0x8
    UAActivityReplay *_controller;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006a50a
@property(retain) UAActivityReplay *controller; // @synthesize controller=_controller;
@property id <SFActivityScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000006a359
- (id)initWithController:(id)arg1;	// IMP=0x001000000006a2ee

@end

