//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebAppViewModel : NSObject
{
    NSString *_accessibilityLabel;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSURL *_iconURL;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

+ (_Bool)validateJSObject:(id)arg1;	// IMP=0x001000000004d9f6
- (void).cxx_destruct;	// IMP=0x000000000004deec
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy) NSString *description;
- (id)iconWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000004da33
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000004d613

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

