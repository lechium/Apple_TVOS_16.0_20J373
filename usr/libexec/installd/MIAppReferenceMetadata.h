//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIAppReferenceMetadata : NSObject
{
    NSArray *_personas;	// 8 = 0x8
}

+ (id)referenceMetadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x002000000001dc8e
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001d7dd
- (void).cxx_destruct;	// IMP=0x002000000001e0ad
@property(retain, nonatomic) NSArray *personas; // @synthesize personas=_personas;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001dff2
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001da45
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d979
- (unsigned long long)hash;	// IMP=0x001000000001d935
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001d8bc
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001d7e5
- (id)init;	// IMP=0x001000000001d7ae

@end
