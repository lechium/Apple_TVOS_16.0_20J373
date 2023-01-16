//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSetChange.h"

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChange : NSOrderedSetChange
{
    unsigned long long _changeType;	// 8 = 0x8
    unsigned long long _sourceIndex;	// 16 = 0x10
    unsigned long long _destinationIndex;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

- (id)value;	// IMP=0x000000000054b6f8
- (unsigned long long)destinationIndex;	// IMP=0x000000000054b6e7
- (unsigned long long)sourceIndex;	// IMP=0x000000000054b6d6
- (unsigned long long)changeType;	// IMP=0x000000000054b6c5
- (void)dealloc;	// IMP=0x000000000054b660
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;	// IMP=0x000000000054b5b0

@end
