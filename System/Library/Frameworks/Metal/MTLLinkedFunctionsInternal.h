//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLLinkedFunctions.h"

__attribute__((visibility("hidden")))
@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions
{
    struct MTLLinkedFunctionsPrivate _private;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000ba9c0
+ (id)alloc;	// IMP=0x00600000000ba9b6
- (id)description;	// IMP=0x00000000000bb08b
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000baf0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bae6a
- (unsigned long long)hash;	// IMP=0x00000000000bac4d
- (_Bool)isEmpty;	// IMP=0x00000000000bac24
- (void)setGroups:(id)arg1;	// IMP=0x00000000000babdd
- (id)groups;	// IMP=0x00000000000babcb
- (void)setPrivateFunctions:(id)arg1;	// IMP=0x00000000000bab84
- (id)privateFunctions;	// IMP=0x00000000000bab72
- (void)setFunctions:(id)arg1;	// IMP=0x00000000000bab2d
- (id)functions;	// IMP=0x00000000000bab1c
- (void)dealloc;	// IMP=0x00000000000baabe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000baa2b

@end

