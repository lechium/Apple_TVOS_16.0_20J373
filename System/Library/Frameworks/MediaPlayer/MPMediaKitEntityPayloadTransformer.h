//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MPMediaKitEntityPayloadTransformer : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSMutableDictionary *_attributes;	// 24 = 0x18
    NSMutableDictionary *_meta;	// 32 = 0x20
    NSString *_transformedType;	// 40 = 0x28
    NSMutableDictionary *_relationships;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000147519
@property(readonly, nonatomic) NSMutableDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSString *transformedType; // @synthesize transformedType=_transformedType;
@property(readonly, nonatomic) NSMutableDictionary *meta; // @synthesize meta=_meta;
@property(readonly, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *transformedPayload;
- (id)initWithType:(id)arg1 transformedType:(id)arg2;	// IMP=0x000000000014727c

@end

