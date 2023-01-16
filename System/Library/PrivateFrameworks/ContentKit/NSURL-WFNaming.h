//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFNaming)
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;	// IMP=0x00100000000ae407
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;	// IMP=0x00100000000ae3f0
+ (id)dc_dictionaryFromQueryString:(id)arg1;	// IMP=0x00100000000ae1c6
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;	// IMP=0x00100000000aded7
+ (id)dc_queryItemsFromQueryString:(id)arg1;	// IMP=0x00100000000ade76
+ (id)wf_savedShortcutStatesURL;	// IMP=0x00100000000bc7aa
+ (id)wf_shortcutsDirectoryURL;	// IMP=0x00100000000bc74e
+ (id)rootVolumeURL;	// IMP=0x00100000000bc729
+ (id)realLibraryDirectoryURL;	// IMP=0x00100000000bc6cd
+ (id)realHomeDirectoryURL;	// IMP=0x00100000000bc69d
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)dc_matchesHost:(id)arg1;	// IMP=0x00100000000addc4
- (id)dc_fragmentQueryDictionary;	// IMP=0x00100000000add0a
- (id)dc_queryDictionary;	// IMP=0x00100000000adca7
- (id)wf_localizedDisplayName;	// IMP=0x00100000000b0eff
- (id)wf_displayPath;	// IMP=0x00100000000b0ef7
- (id)wf_displayPathComponents;	// IMP=0x00100000000b0eef
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000bc4f8
- (_Bool)isContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000bc4df
- (id)wf_relativePathFromURL:(id)arg1;	// IMP=0x00100000000bc33a
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;	// IMP=0x00100000000bc29c
- (id)volumeName;	// IMP=0x00100000000bc257
- (id)fileSize;	// IMP=0x00100000000bc184
- (_Bool)wf_fileHasExtendedAttribute:(id)arg1;	// IMP=0x00100000000bc042
- (_Bool)wf_sandboxAllowsWritingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000bc029
- (_Bool)wf_sandboxAllowsReadingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000bc010
- (_Bool)wf_sandboxAllowsWritingFile;	// IMP=0x00100000000bbff7
- (_Bool)wf_sandboxAllowsReadingFile;	// IMP=0x00100000000bbfde
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00100000000bbf8e
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;	// IMP=0x00100000000bbf39
- (_Bool)fileIsDirectory;	// IMP=0x00100000000bbeb0
- (_Bool)fileIsWritable;	// IMP=0x00100000000bbe35
- (_Bool)fileIsReadable;	// IMP=0x00100000000bbdba
- (_Bool)fileExists;	// IMP=0x00100000000bbd3f
@end

