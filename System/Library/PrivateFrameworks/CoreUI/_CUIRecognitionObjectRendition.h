//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CUIRecognitionObjectRendition
{
    int _objectVersion;	// 224 = 0xe0
    CDStruct_14d5dc5e _transformation;	// 240 = 0xf0
}

- (CDStruct_14d5dc5e)transformation;	// IMP=0x000000000006f1a5
- (int)objectVersion;	// IMP=0x000000000006f195
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;	// IMP=0x000000000006efd1
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006eedf
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006eecd

@end

