/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _entry;
    NSDate * _exit;
    NSUUID * _identifier;
}

@property (nonatomic, readonly) NSDate *entry;
@property (nonatomic, readonly) NSDate *entryTime;
@property (nonatomic, readonly) NSDate *exit;
@property (nonatomic, readonly) NSDate *exitTime;
@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (id)entryTime;
- (id)exit;
- (id)exitTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
