//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScreen;

__attribute__((visibility("hidden")))
@interface _UIScreenBoundingPathUtilities : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
}

+ (id)boundingPathUtilitiesForScreen:(id)arg1;	// IMP=0x00600000007c6dad
- (void).cxx_destruct;	// IMP=0x00000000007c6f88
@property(nonatomic, getter=_screen) __weak UIScreen *screen; // @synthesize screen=_screen;
- (id)boundingPathForWindow:(id)arg1;	// IMP=0x00000000007c6e9a
- (id)initWithScreen:(id)arg1;	// IMP=0x00000000007c6e36

@end

