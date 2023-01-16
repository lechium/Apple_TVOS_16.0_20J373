//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSInvalidatable;

@interface _PBSceneShroudAgentUserInfo : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    id <BSInvalidatable> _presentationAssertion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001074c2
@property(retain, nonatomic) id <BSInvalidatable> presentationAssertion; // @synthesize presentationAssertion=_presentationAssertion;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)invalidate;	// IMP=0x00100000001073e0
- (void)dealloc;	// IMP=0x00100000001073a2
- (id)initWithBundleID:(id)arg1;	// IMP=0x0010000000107327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

