//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKAppLaunchMonitor : NSObject
{
    NSString *_foregroundAppBundleId;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000020fc
- (void).cxx_destruct;	// IMP=0x00200000000020ec
@property(retain, nonatomic) NSString *foregroundAppBundleId; // @synthesize foregroundAppBundleId=_foregroundAppBundleId;
- (void)stopListening;	// IMP=0x001000000000204a
- (void)startListening;	// IMP=0x0010000000001fc3
- (void)dealloc;	// IMP=0x0010000000001f85
- (id)init;	// IMP=0x0010000000001f37

@end

