//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVCKDMAPBuffer : NSObject
{
    char *_bytes;	// 8 = 0x8
    int _capacity;	// 16 = 0x10
    int _bytesUsed;	// 20 = 0x14
    int _resizeCount;	// 24 = 0x18
}

+ (id)bufferWithCapacity:(unsigned int)arg1;	// IMP=0x006000000002acf2
+ (id)buffer;	// IMP=0x006000000002acc4
@property(readonly, nonatomic) char *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) int bytesUsed; // @synthesize bytesUsed=_bytesUsed;
- (id)bufferData;	// IMP=0x000000000002ce64
- (int)dmapDataTypeForDMAPCode:(unsigned int)arg1;	// IMP=0x000000000002c9e2
- (unsigned int)dmapCodeForATVProperty:(id)arg1;	// IMP=0x000000000002c6a5
- (unsigned int)dmapCodeForMLProperty:(id)arg1;	// IMP=0x000000000002b6cc
- (void)_addDMAPCode:(unsigned int)arg1 property:(id)arg2 dataToAdd:(id)arg3;	// IMP=0x000000000002b462
- (void)addATVProperty:(id)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002b3df
- (void)addMLProperty:(id)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002b362
- (void)appendBuffer:(const void *)arg1 length:(unsigned int)arg2;	// IMP=0x000000000002b2cc
- (void)addRawData:(id)arg1;	// IMP=0x000000000002b24b
- (void)addRawInt64:(unsigned long long)arg1;	// IMP=0x000000000002b21e
- (void)addRawInt32:(unsigned int)arg1;	// IMP=0x000000000002b1f3
- (void)addData:(unsigned int)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002b12a
- (void)addUTF8Str:(unsigned int)arg1 dataToAdd:(const char *)arg2;	// IMP=0x000000000002b0ab
- (void)addStr:(unsigned int)arg1 dataToAdd:(id)arg2;	// IMP=0x000000000002b060
- (void)addFloat32:(unsigned int)arg1 dataToAdd:(float)arg2;	// IMP=0x000000000002b04a
- (void)addInt64:(unsigned int)arg1 dataToAdd:(unsigned long long)arg2;	// IMP=0x000000000002afd4
- (void)addInt32:(unsigned int)arg1 dataToAdd:(unsigned int)arg2;	// IMP=0x000000000002af5e
- (void)addInt16:(unsigned int)arg1 dataToAdd:(unsigned short)arg2;	// IMP=0x000000000002aee8
- (void)addInt8:(unsigned int)arg1 dataToAdd:(unsigned char)arg2;	// IMP=0x000000000002ae75
- (void)updateHeaderAtOffset:(unsigned int)arg1;	// IMP=0x000000000002ae3e
- (unsigned int)addHeader:(unsigned int)arg1;	// IMP=0x000000000002ade4
- (void)dealloc;	// IMP=0x000000000002ada5
- (id)initWithCapacity:(unsigned int)arg1;	// IMP=0x000000000002ad3d
- (id)init;	// IMP=0x000000000002ad26

@end

