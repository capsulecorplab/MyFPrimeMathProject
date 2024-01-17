// ======================================================================
// \title  MathSender.template.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for MathSender component implementation class
// ======================================================================

#include "Components/MathSender/MathSender.hpp"
#include "FpConfig.hpp"

namespace MathModule {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  MathSender ::
    MathSender(const char* const compName) :
      MathSenderComponentBase(compName)
  {

  }

  MathSender ::
    ~MathSender()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void MathSender ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}