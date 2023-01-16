//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArrayChange.h"

__attribute__((visibility("hidden")))
@interface NSConcreteArrayChange : NSArrayChange
{
    unsigned long long _changeType;	// 8 = 0x8
    unsigned long long _sourceIndex;	// 16 = 0x10
    unsigned long long _destinationIndex;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

- (id)value;	// IMP=0x00000000005286fc
- (unsigned long long)destinationIndex;	// IMP=0x00000000005286eb
- (unsigned long long)sourceIndex;	// IMP=0x00000000005286da
- (unsigned long long)changeType;	// IMP=0x00000000005286c9
- (void)dealloc;	// IMP=0x0000000000528664
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;	// IMP=0x00000000005285b4

@end
