//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VMUSimpleSerializer
{
    void *_map;	// 40 = 0x28
    unsigned int _internCursor;	// 48 = 0x30
}

- (id)copyContiguousData;	// IMP=0x000000000004479b
- (void)_serializeValues:(unsigned int *)arg1 count:(unsigned int)arg2;	// IMP=0x0000000000044768
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;	// IMP=0x0000000000044643
- (unsigned int)serializeString:(id)arg1;	// IMP=0x00000000000445c1
- (void)serialize64:(unsigned long long)arg1;	// IMP=0x0000000000044565
- (void)serialize32:(unsigned int)arg1;	// IMP=0x00000000000444c9
- (void)dealloc;	// IMP=0x000000000004443c
- (id)init;	// IMP=0x00000000000443bc

@end
