//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSExpression, NSString;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject
{
    NSExpression *_valueExpression;	// 8 = 0x8
    NSString *_propertyName;	// 16 = 0x10
    NSPropertyTransform *_prerequisiteTransform;	// 24 = 0x18
    _Bool _replaceMissingValueOnly;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000151112
- (id)description;	// IMP=0x000000000015144d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015137a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001511eb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015111a
- (void)dealloc;	// IMP=0x00000000001510ae
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;	// IMP=0x000000000015105b

@end

