//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingReader : NSObject
{
    long long _state;	// 8 = 0x8
    struct ui_archive *_laArchive;	// 16 = 0x10
    int _laArchiveType;	// 24 = 0x18
    NSString *_laArchiveTypeName;	// 32 = 0x20
    int _laProcessingState;	// 40 = 0x28
    long long _nextLoadedItemEntrySequenceIndex;	// 48 = 0x30
    NSMutableArray *_readableLoadedItemEntryQueue;	// 56 = 0x38
    NSError *_readError;	// 64 = 0x40
    NSString *_archivePath;	// 72 = 0x48
    struct ui_archive *_underlyingArchive;	// 80 = 0x50
    long long _appleDoubleIdentificationType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000057332d
@property(nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property(readonly, nonatomic) struct ui_archive *underlyingArchive; // @synthesize underlyingArchive=_underlyingArchive;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (id)_debugLoadAndPrintAllRemainingItems;	// IMP=0x00000000005731dd
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1;	// IMP=0x0000000000573182
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;	// IMP=0x000000000057309f
- (void)_closeArchive;	// IMP=0x0000000000573061
- (_Bool)_openArchive;	// IMP=0x0000000000572efc
- (_Bool)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;	// IMP=0x0000000000572e76
- (_Bool)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;	// IMP=0x0000000000572da4
@property(readonly, nonatomic) NSString *openedArchiveUnderlyingFormatName;
- (_Bool)_readItemsWithShouldVisitBlock:(CDUnknownBlockType)arg1 visitorBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000572af9
- (_Bool)readLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000572a8b
- (_Bool)readAllItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000572a64
- (void)close;	// IMP=0x0000000000572a52
- (_Bool)open;	// IMP=0x0000000000572a40
- (id)initForReadingArchivePath:(id)arg1;	// IMP=0x0000000000572977

@end

