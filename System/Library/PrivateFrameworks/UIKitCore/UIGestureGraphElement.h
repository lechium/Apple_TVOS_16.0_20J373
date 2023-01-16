//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006fa7f6
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000006fa7da
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000006fa7c8
- (id)description;	// IMP=0x00000000006fa467
- (void)setProperties:(id)arg1;	// IMP=0x00000000006fa41f
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000006fa3c8
- (void)removeAllProperties;	// IMP=0x00000000006fa3b2
- (void)removePropertyForKey:(id)arg1;	// IMP=0x00000000006fa39c
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006fa386
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000006fa219
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000006fa203
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000006fa125

@end

