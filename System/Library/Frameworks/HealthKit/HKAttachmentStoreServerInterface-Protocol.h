//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAttachment, NSDictionary, NSFileHandle, NSString, NSUUID;

@protocol HKAttachmentStoreServerInterface <NSObject>
- (void)remote_getDataChunkForAttachment:(HKAttachment *)arg1 chunkSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)remote_streamDataForAttachment:(HKAttachment *)arg1;
- (void)remote_attachmentReferencesForObjectIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(NSUUID *)arg1 objectIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_addAttachmentWithName:(NSString *)arg1 contentTypeIdentifier:(NSString *)arg2 fileHandle:(NSFileHandle *)arg3 toObjectWithIdentifier:(NSString *)arg4 attachmentMetadata:(NSDictionary *)arg5 referenceMetadata:(NSDictionary *)arg6 completion:(void (^)(HKAttachmentReference *, NSError *))arg7;
- (void)remote_addReferenceWithAttachment:(HKAttachment *)arg1 toObjectWithIdentifier:(NSString *)arg2 metadata:(NSDictionary *)arg3 completion:(void (^)(HKAttachmentReference *, NSError *))arg4;
@end

