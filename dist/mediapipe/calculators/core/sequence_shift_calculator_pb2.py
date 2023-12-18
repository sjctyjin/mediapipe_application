# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: mediapipe/calculators/core/sequence_shift_calculator.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from mediapipe.framework import calculator_pb2 as mediapipe_dot_framework_dot_calculator__pb2
mediapipe_dot_framework_dot_calculator__options__pb2 = mediapipe_dot_framework_dot_calculator__pb2.mediapipe_dot_framework_dot_calculator__options__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='mediapipe/calculators/core/sequence_shift_calculator.proto',
  package='mediapipe',
  syntax='proto2',
  serialized_pb=_b('\n:mediapipe/calculators/core/sequence_shift_calculator.proto\x12\tmediapipe\x1a$mediapipe/framework/calculator.proto\"\x94\x01\n\x1eSequenceShiftCalculatorOptions\x12\x19\n\rpacket_offset\x18\x01 \x01(\x05:\x02-12W\n\x03\x65xt\x12\x1c.mediapipe.CalculatorOptions\x18\x87\xba\xa9\x33 \x01(\x0b\x32).mediapipe.SequenceShiftCalculatorOptions')
  ,
  dependencies=[mediapipe_dot_framework_dot_calculator__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_SEQUENCESHIFTCALCULATOROPTIONS = _descriptor.Descriptor(
  name='SequenceShiftCalculatorOptions',
  full_name='mediapipe.SequenceShiftCalculatorOptions',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='packet_offset', full_name='mediapipe.SequenceShiftCalculatorOptions.packet_offset', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=True, default_value=-1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
    _descriptor.FieldDescriptor(
      name='ext', full_name='mediapipe.SequenceShiftCalculatorOptions.ext', index=0,
      number=107633927, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=True, extension_scope=None,
      options=None),
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=112,
  serialized_end=260,
)

DESCRIPTOR.message_types_by_name['SequenceShiftCalculatorOptions'] = _SEQUENCESHIFTCALCULATOROPTIONS

SequenceShiftCalculatorOptions = _reflection.GeneratedProtocolMessageType('SequenceShiftCalculatorOptions', (_message.Message,), dict(
  DESCRIPTOR = _SEQUENCESHIFTCALCULATOROPTIONS,
  __module__ = 'mediapipe.calculators.core.sequence_shift_calculator_pb2'
  # @@protoc_insertion_point(class_scope:mediapipe.SequenceShiftCalculatorOptions)
  ))
_sym_db.RegisterMessage(SequenceShiftCalculatorOptions)

_SEQUENCESHIFTCALCULATOROPTIONS.extensions_by_name['ext'].message_type = _SEQUENCESHIFTCALCULATOROPTIONS
mediapipe_dot_framework_dot_calculator__options__pb2.CalculatorOptions.RegisterExtension(_SEQUENCESHIFTCALCULATOROPTIONS.extensions_by_name['ext'])

# @@protoc_insertion_point(module_scope)
