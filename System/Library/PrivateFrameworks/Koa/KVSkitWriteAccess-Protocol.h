//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSURL, NSUUID;

@protocol KVSkitWriteAccess
- (_Bool)shouldMerge:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)removeVocabularyItemWithRecordId:(NSUUID *)arg1 error:(id *)arg2;
- (_Bool)addVocabularyItemWithBuffer:(NSData *)arg1 originAppId:(NSString *)arg2 recordId:(NSUUID *)arg3 error:(id *)arg4;
- (_Bool)setTransactionLocale:(long long)arg1 assetPath:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)isSupportedItemType:(long long)arg1;
@end

