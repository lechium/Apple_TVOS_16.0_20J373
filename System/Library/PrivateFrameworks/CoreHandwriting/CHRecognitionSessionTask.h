//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHRecognitionSessionResult, CHStrokeClassificationModel, NSArray, NSSet;
@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSessionTask : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    _Bool _isHighResponsivenessTask;	// 9 = 0x9
    _Bool _saveInputDrawings;	// 10 = 0xa
    _Bool _strokeGroupingOnly;	// 11 = 0xb
    CHRecognitionSessionResult *_inputResult;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    id <CHRecognitionSessionTaskDelegate> _delegate;	// 32 = 0x20
    NSArray *_recognitionLocales;	// 40 = 0x28
    NSArray *_preferredLocales;	// 48 = 0x30
    id <CHStrokeProvider> _strokeProvider;	// 56 = 0x38
    CHRecognitionSessionResult *_outputResult;	// 64 = 0x40
    long long _recognitionEnvironment;	// 72 = 0x48
    long long _strokeGroupingRequirement;	// 80 = 0x50
    NSSet *_forceRecognitionStrokeGroupIdentifiers;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *__recognizersQueue;	// 96 = 0x60
    CHStrokeClassificationModel *_strokeClassificationModel;	// 104 = 0x68
    NSArray *_subjectStrokeIdentifiers;	// 112 = 0x70
    CDUnknownBlockType _partialResultBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000eead0
@property(copy, nonatomic) CDUnknownBlockType partialResultBlock; // @synthesize partialResultBlock=_partialResultBlock;
@property(readonly, nonatomic) NSArray *subjectStrokeIdentifiers; // @synthesize subjectStrokeIdentifiers=_subjectStrokeIdentifiers;
@property(readonly, nonatomic) CHStrokeClassificationModel *strokeClassificationModel; // @synthesize strokeClassificationModel=_strokeClassificationModel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_recognizersQueue; // @synthesize _recognizersQueue=__recognizersQueue;
@property(nonatomic) _Bool strokeGroupingOnly; // @synthesize strokeGroupingOnly=_strokeGroupingOnly;
@property(copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers; // @synthesize forceRecognitionStrokeGroupIdentifiers=_forceRecognitionStrokeGroupIdentifiers;
@property(nonatomic) _Bool saveInputDrawings; // @synthesize saveInputDrawings=_saveInputDrawings;
@property(readonly, nonatomic) _Bool isHighResponsivenessTask; // @synthesize isHighResponsivenessTask=_isHighResponsivenessTask;
@property(readonly, nonatomic) long long strokeGroupingRequirement; // @synthesize strokeGroupingRequirement=_strokeGroupingRequirement;
@property(readonly, nonatomic) long long recognitionEnvironment; // @synthesize recognitionEnvironment=_recognitionEnvironment;
@property(retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult; // @synthesize outputResult=_outputResult;
@property(readonly, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
@property(readonly, copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, copy, nonatomic) NSArray *recognitionLocales; // @synthesize recognitionLocales=_recognitionLocales;
@property(nonatomic) id <CHRecognitionSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) CHRecognitionSessionResult *inputResult; // @synthesize inputResult=_inputResult;
- (id)newGroupingManager;	// IMP=0x00000000000ee830
- (id)newStrokeClassifier;	// IMP=0x00000000000ee740
- (id)clutterFilter;	// IMP=0x00000000000ee6c0
- (id)_recognitionResultsForNonTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;	// IMP=0x00000000000ee3d0
- (id)_tokenizedTextResultForDrawing:(id)arg1 usingRecognizer:(id)arg2 isRemoteRecognizer:(_Bool)arg3 locale:(id)arg4 strokeLimit:(long long)arg5 recognitionError:(id *)arg6;	// IMP=0x00000000000ec830
- (id)_textRecognitionResultsForTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;	// IMP=0x00000000000eba30
- (id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;	// IMP=0x00000000000eba20
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;	// IMP=0x00000000000eaf40
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;	// IMP=0x00000000000eaf10
- (_Bool)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2;	// IMP=0x00000000000eaee0
- (void)cancel;	// IMP=0x00000000000eadd0
- (void)main;	// IMP=0x00000000000e8d90
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(_Bool)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 subjectStrokeIdentifiers:(id)arg10 partialResultBlock:(CDUnknownBlockType)arg11;	// IMP=0x00000000000e8ce0
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(_Bool)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 partialResultBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000000e8a40
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6;	// IMP=0x00000000000e89f0
- (id)init;	// IMP=0x00000000000e8960

@end
