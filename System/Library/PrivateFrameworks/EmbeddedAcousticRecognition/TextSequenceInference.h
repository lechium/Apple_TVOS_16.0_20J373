//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface TextSequenceInference : NSObject
{
    NSMutableArray *_sequence;	// 8 = 0x8
    NSNumber *_target;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b9aae
- (id)target;	// IMP=0x00000000000b9aa0
- (id)sequence;	// IMP=0x00000000000b9a92
- (void)addWordWithInputId:(unsigned long long)arg1;	// IMP=0x00000000000b9a04
- (void)resetWithBOS:(unsigned long long)arg1;	// IMP=0x00000000000b9921
- (id)initWithLength:(unsigned long long)arg1 BOS:(unsigned long long)arg2;	// IMP=0x00000000000b982b
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x00000000000b979a
- (id)init;	// IMP=0x00000000000b978c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
