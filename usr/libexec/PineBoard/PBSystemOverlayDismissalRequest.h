//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PBSystemOverlayDismissalRequest : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _animated;	// 16 = 0x10
    NSDictionary *_clientOptions;	// 24 = 0x18
    _Bool _clientInitiated;	// 32 = 0x20
}

+ (id)dismissalRequestForAllSessions;	// IMP=0x002000000015e9a4
+ (id)dismissalRequestForSession:(id)arg1;	// IMP=0x001000000015e91b
- (void).cxx_destruct;	// IMP=0x002000000015eb21
- (_Bool)_clientInitiated;	// IMP=0x001000000015eb18
@property(readonly, copy, nonatomic) NSDictionary *clientOptions;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015eac2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015eab6
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000015e9b7

@end
