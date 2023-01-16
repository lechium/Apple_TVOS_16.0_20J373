//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IDSCKFetchRecordsOperation
{
    NSArray *_recordIDs;	// 8 = 0x8
    NSArray *_desiredKeys;	// 16 = 0x10
    CDUnknownBlockType _perRecordProgressBlock;	// 24 = 0x18
    CDUnknownBlockType _perRecordCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _fetchRecordsCompletionBlock;	// 40 = 0x28
}

+ (id)alloc;	// IMP=0x00600000000a4186
+ (Class)__class;	// IMP=0x00600000000a4136
- (void).cxx_destruct;	// IMP=0x00000000000a424a
@property(copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;

@end

