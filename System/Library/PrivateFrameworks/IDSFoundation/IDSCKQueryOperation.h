//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSCKQueryOperation
{
    CDUnknownBlockType _recordFetchedBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x00600000000a3c9e
+ (Class)__class;	// IMP=0x00600000000a3c4e
- (void).cxx_destruct;	// IMP=0x00000000000a3d01
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;

@end

