//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSPersonaWithAttributes : NSObject
{
    NSString *_personaUniqueString;	// 8 = 0x8
    unsigned long long _personaType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000015b903
- (void).cxx_destruct;	// IMP=0x000000000015b92f
- (unsigned long long)hash;	// IMP=0x000000000015b8de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015b859
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015b7ec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015b70e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b703

@end

