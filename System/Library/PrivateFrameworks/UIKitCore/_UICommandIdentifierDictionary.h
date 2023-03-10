//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject
{
    _UISelectorDictionary *_actionDictionary;	// 8 = 0x8
    NSMutableDictionary *_actionPropertyListDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000122030a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001220277
- (unsigned long long)hash;	// IMP=0x0000000001220238
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000122020a
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000122019e
- (void)removeEntriesFromDictionary:(id)arg1;	// IMP=0x00000000012200e6
- (id)intersectingIdentifiersFromDictionary:(id)arg1;	// IMP=0x000000000121feed
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;	// IMP=0x000000000121fcf1
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x000000000121fc7d
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;	// IMP=0x000000000121fbc5
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x000000000121fb3b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000121fa9e
- (id)init;	// IMP=0x000000000121fa29

@end

