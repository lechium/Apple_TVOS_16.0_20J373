//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHTextInputQuery, NSArray;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask
{
    NSArray *_initialTextInputTargets;	// 8 = 0x8
    CHTextInputQuery *_activeTextInputQuery;	// 16 = 0x10
}

+ (id)lastStrokeInGroup:(id)arg1 strokeProvider:(id)arg2;	// IMP=0x0060000000099a80
+ (struct CGRect)_contextBoundsForTargetContentInfo:(id)arg1;	// IMP=0x0060000000099970
- (void).cxx_destruct;	// IMP=0x0000000000099bc0
@property(retain, nonatomic) CHTextInputQuery *activeTextInputQuery; // @synthesize activeTextInputQuery=_activeTextInputQuery;
@property(readonly, nonatomic) NSArray *initialTextInputTargets; // @synthesize initialTextInputTargets=_initialTextInputTargets;
- (id)_dataSource:(id)arg1 textInputTargetForStrokeGroup:(id)arg2 simultaneousGroups:(id)arg3;	// IMP=0x0000000000099490
- (id)_dataSource:(id)arg1 inputTargetContentInfoForStrokeGroups:(id)arg2 groupingManager:(id)arg3;	// IMP=0x0000000000098660
- (id)_textCorrectionResultForStrokeGroup:(id)arg1 groupingManager:(id)arg2 targetContentInfo:(id)arg3 locales:(id)arg4 previousCorrectionResult:(id)arg5;	// IMP=0x0000000000098120
- (id)newGroupingManager;	// IMP=0x0000000000097fd0
- (id)newStrokeClassifier;	// IMP=0x0000000000097ee0
- (id)clutterFilter;	// IMP=0x0000000000097ed0
- (id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;	// IMP=0x0000000000097560
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;	// IMP=0x0000000000097550
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5;	// IMP=0x00000000000974c0
- (id)initWithLocales:(id)arg1 strokeProvider:(id)arg2 initialTextInputTargets:(id)arg3 inputResult:(id)arg4 recognitionEnvironment:(long long)arg5;	// IMP=0x0000000000097390

// Remaining properties
@property(nonatomic) id <CHRecognitionSessionTextInputTaskDelegate> delegate; // @dynamic delegate;

@end

