//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject
{
    NSString *_address;	// 8 = 0x8
}

+ (id)emailAddress:(id)arg1;	// IMP=0x00100000000358d0
- (void).cxx_destruct;	// IMP=0x00000000000359ef
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x00000000000359d3
- (id)encodedString;	// IMP=0x00000000000359c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003598c
- (id)initWithAddress:(id)arg1;	// IMP=0x0000000000035919

@end

