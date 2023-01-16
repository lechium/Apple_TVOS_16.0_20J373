//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingExtractor : NSObject
{
    NSString *_archivePath;	// 8 = 0x8
    NSArray *_extractedContentAbsolutePaths;	// 16 = 0x10
}

+ (_Bool)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2;	// IMP=0x0060000000571b50
+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1;	// IMP=0x0060000000571a61
- (void).cxx_destruct;	// IMP=0x00000000005728a0
@property(readonly, nonatomic) NSArray *extractedContentAbsolutePaths; // @synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (_Bool)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000571bed
- (id)initForExtractingArchivePath:(id)arg1;	// IMP=0x00000000005719f6

@end

